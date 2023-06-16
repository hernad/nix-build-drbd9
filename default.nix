{
  #pkgs ? import <nixpkgs> {},
  pkgs ? import (builtins.fetchTarball {
    url = "https://github.com/NixOS/nixpkgs/archive/0eeebd64de89e4163f4d3cf34ffe925a5cf67a05.tar.gz";
    sha256 = "sha256:riGg89eWhXJcPNrQGcSwTEEm7CGxWC06oSX44hajeMw=";
  }) {},
  coccinelle ? pkgs.coccinelle,
  curl ? pkgs.curl,
  kernel ? pkgs.linuxPackages_6_3.kernel
}:
with pkgs;
stdenv.mkDerivation rec {
  pname = "drbd";
  version = "9.2.4";

  __noChroot = true;

  KERNEL = kernel.dev;
  KERNEL_VERSION = kernel.modDirVersion;

  buildInputs = [ 
      kernel.dev 
      curl 
      pahole
      coccinelle 
      git
  ];

  src = pkgs.fetchgit {
    url = "https://gitlab.inria.fr/nix-tutorial/chord-tuto-nix-2022";
    rev = "069d2a5bfa4c4024063c25551d5201aeaf921cb3";
    sha256 = "sha256-MlqJOoMSRuYeG+jl8DFgcNnpEyeRgDCK2JlN9pOqBWA=";
  };


  #configurePhase = ''
  #  cmake .
  #'';

  #buildPhase = ''
  #  make
  #'';

  #installPhase = ''
  #  mkdir -p $out/bin
  #  mv chord $out/bin
  #'';

  # Initially, nix-shell was designed to enter a package’s build environment for debugging purpose.
  # However, nix-shell can also be used to enter an custom environment defined
  # by the mkShell function.

  shellHook = ''
     echo KERNEL = $KERNEL
     echo KERNEL_VERSION = $KERNEL_VERSION

  '';
}
