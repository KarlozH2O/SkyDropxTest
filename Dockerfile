FROM nginx

COPY ./conf/ /etc/nginx/conf.d

WORKDIR /usr/share/nginx/html
