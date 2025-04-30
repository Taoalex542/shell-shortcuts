sudo mkdir -p /mnt/ntfs
sudo mount -t ntfs /dev/nvme0n1p3 /mnt/ntfs
sudo bt-dualboot --sync-all -b
