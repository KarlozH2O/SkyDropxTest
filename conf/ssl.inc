ssl_certificate "/etc/nginx/certs/crt.bundle";
ssl_certificate_key "/etc/nginx/certs/crt.key";
ssl_session_cache shared:SSL:1m;
ssl_session_timeout  10m;
ssl_ciphers HIGH:!aNULL:!MD5;
ssl_prefer_server_ciphers on;