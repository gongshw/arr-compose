listen       443 ssl;
listen  [::]:443 ssl;

ssl_certificate     /etc/letsencrypt/live/desktop.halfsugar.tech/fullchain.pem;
ssl_certificate_key /etc/letsencrypt/live/desktop.halfsugar.tech/privkey.pem;

ssl_protocols       TLSv1 TLSv1.1 TLSv1.2 TLSv1.3;
ssl_ciphers         HIGH:!aNULL:!MD5;


access_log  /var/log/nginx/host.access.log  main;
