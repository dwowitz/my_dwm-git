pkgname=dwm-git
_pkgname=dwm
pkgver=6.1.6.gab9571b
pkgrel=1
pkgdesc="A dynamic window manager for X"
url="http://dwm.suckless.org"
arch=('i686' 'x86_64')
license=('MIT')
options=(zipman)
depends=('libx11' 'libxinerama' 'libxft')
makedepends=('git')
install=dwm.install
provides=('dwm')
conflicts=('dwm')
epoch=1
source=(dwm.desktop
        colors.h
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
         'SKIP')

pkgver(){
  cd $_pkgname
  git describe --tags |sed 's/-/./g'
}

prepare() {
  cd $_pkgname
  if [[ -f "$SRCDEST/$pkgname/config.h" ]]; then
    cp -f "$SRCDEST/$pkgname/config.h" config.h
  fi
  
  cd $srcdir/$pkgname-$pkgver
  for p in "${_patches[@]}"; do
    echo "=> $p"
    patch < ../$p || return 1
  done

  cp $srcdir/colors.h colors.h
}

build() {
  cd $_pkgname
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd $_pkgname
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README "$pkgdir/usr/share/doc/$pkgname/README"
  install -m644 -D ../dwm.desktop "$pkgdir/usr/share/xsessions/dwm.desktop"
}

# vim:set ts=2 sw=2 et:
