listen       443 ssl;
listen  [::]:443 ssl;

ssl_certificate     /cert/home.halfsugar.tech/fullchain1.pem;
ssl_certificate_key /cert/home.halfsugar.tech/privkey1.pem;

ssl_protocols       TLSv1 TLSv1.1 TLSv1.2 TLSv1.3;
ssl_ciphers         HIGH:!aNULL:!MD5;


access_log  /var/log/nginx/host.access.log  main;
