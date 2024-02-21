FROM alpine
RUN apk add --no-cache g++ && apk add --no-cache cmake && apk add --no-cache make
WORKDIR /usr/c++/calculator_app
COPY . .
WORKDIR /usr/c++/calculator_app/lib
RUN  mkdir build && cd build && cmake .. && make
WORKDIR /usr/c++/calculator_app/tests
RUN  mkdir build && cd build && cmake .. && make
WORKDIR /usr/c++/calculator_app/tests/build
RUN chmod +x deployment-service
CMD ["./exec"]