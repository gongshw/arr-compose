docker run -it --rm --name certbot `
    -v "$(Get-Location)\letsencrypt\config:/etc/letsencrypt" `
    -v "$(Get-Location)\letsencrypt\secrets:/secrets" `
    -v "$(Get-Location)\letsencrypt\bin:/letsencrypt/bin" `
    --entrypoint "sh" `
    certbot/dns-cloudflare `
    /letsencrypt/bin/run.sh
