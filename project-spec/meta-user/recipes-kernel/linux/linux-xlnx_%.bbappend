FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI:append = " file://bsp.cfg"
KERNEL_FEATURES:append = " bsp.cfg"
SRC_URI += "file://user_2025-10-14-14-34-00.cfg \
            file://user_2025-10-14-18-31-00.cfg \
            file://user_2025-10-15-08-17-00.cfg \
            "

