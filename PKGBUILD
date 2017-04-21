pkgname=dwm-git_${USER}
_pkgname=dwm_${USER}
pkgver=6.1.17.g5b238c8
pkgrel=1
pkgdesc="A dynamic window manager for X"
url="http://dwm.suckless.org"
arch=('i686' 'x86_64')
license=('MIT')
options=(zipman)
depends=('libx11' 'libxinerama' 'libxft')
makedepends=('git')
install=dwm.install
provides=("dwm_${USER}")
conflicts=("dwm_${USER}")
epoch=1
source=(dwm.desktop
        colors.h
        config.h
        Makefile
        "$_pkgname::git+http://git.suckless.org/dwm")
_patches=(01_dwm-statuscolors-nopad-bb3bd6f-20170106.diff
					02_dwm-dualstatus-colored-6.1.diff
					03_dwm-uselessgap-6.1.diff
					04_dwm-pertag-20170107-bb3bd6f.diff
					05_dwm-fancybar-git-20160725-7af4d43.diff
					06_dwm-r1522-viewontag.diff
					07_dwm-warp-git-20160626-7af4d43.diff
					08_dwm-center-20160719-56a31dc.diff
					10_dwm-resizecorners-6.1.diff
					11_dwm-savefloats-20160723-56a31dc.diff
					99_my-settings.diff)
source=(${source[@]} ${_patches[@]})

md5sums=('939f403a71b6e85261d09fc3412269ee'
         '252d0f0c078614b39d0e0058bf6a47d2'
         'bb3042d9fb27ff6fc7c5726604dcdef4'
         'ae3d527a8fe8f6826792e6548151c810'
         'SKIP'
         '27e6017102bb432dfa421b9d1e7be486'
         '3f43454ab26ddd5d3fcfdeedab670509'
         '05bf190e96e7fdc9d088be46d709649f'
         '470ee8ea8a29b20395d9481857333c15'
         '93cfa5112442be7007142f08f60e4d52'
         '32bf82bf03e2fccd14d814d4416b19f6'
         'be6941fa34af73e529c8a3eb6c585f0f'
         '83950436538eadcf7f217190ed71a837'
         '5cfdb08e42746092d825284669dd10ab'
         '103805203b6f34cfcba7477d57bd98f2'
         '3c57699cd95e8250c2f26ff86436abaf')

pkgver(){
  cd $_pkgname
  git describe --tags |sed 's/-/./g'
}

prepare() {
  cd $_pkgname
  #if [[ -f "$SRCDEST/$pkgname/config.h" ]]; then
  #  cp -f "$SRCDEST/$pkgname/config.h" config.h
  #fi
  
  for p in "${_patches[@]}"; do
    echo "=> $p"
    patch < ../$p || return 1
  done

  cp -f $srcdir/config.h config.h
  cp -f $srcdir/colors.h colors.h
  cp -f $srcdir/Makefile Makefile
}

build() {
  cd $_pkgname
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd $_pkgname
  make VERSION=6.1_${USER} PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README "$pkgdir/usr/share/doc/$pkgname/README"
  install -m644 -D ../dwm.desktop "$pkgdir/usr/share/xsessions/${DWMBN}.desktop"
}

# vim:set ts=2 sw=2 et:
