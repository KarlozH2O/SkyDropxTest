    ssl_certificate crt.bundle;
    ssl_certificate_key crt.key;
    ssl_dhparam dh20148.pem;
    ## Limit connections to include only the strong versions and ciphers of SSL/TLS
    ## By default nginx uses the following, so configuring them explicitly is
    ## generally not needed.
    ssl_protocols TLSv1 TLSv1.1 TLSv1.2;
    ssl_ciphers HIGH:!aNULL:!MD5
    ssl_ciphers ECDH+AESGCM:ECDH+AES256:ECDH+AES128:DH+3DES:!ADH:!AECDH:!MD5;
    ssl_prefer_server_ciphers  on;
