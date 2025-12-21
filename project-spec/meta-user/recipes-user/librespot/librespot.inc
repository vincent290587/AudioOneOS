DEPENDS += " alsa-lib"
RDEPENDS:librespot += " alsa-lib"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

#SRC_URI += " file://lock.patch"

inherit pkgconfig

CARGO_BUILD_FLAGS += "--no-default-features --features alsa-backend"

do_compile:prepend() {
    export AWS_LC_SYS_EXTERNAL_BINDGEN=1
    export AWS_LC_SYS_NO_PREFIX=1
}

#SYSTEMD_SERVICE:${PN} = "librespot.service"
#SYSTEMD_AUTO_ENABLE:${PN} = "enable"

#do_install:append() {
#    install -d ${D}/${systemd_unitdir}/system
#    install -m 0644 ${S}/contrib/librespot.service ${D}/${systemd_unitdir}/system
#}

#FILES:${PN} += " ${systemd_unitdir}/system/librespot.service"

