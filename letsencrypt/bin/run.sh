chmod go-rwx /secrets/cloudflare.ini
certbot certonly \
    -v \
    --dns-cloudflare \
    --dns-cloudflare-credentials /secrets/cloudflare.ini \
    -d "desktop.halfsugar.tech" \
    -d "*.home.halfsugar.tech" \
    -d "*.0.home.halfsugar.tech" 
