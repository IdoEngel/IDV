FROM silkeh/clang:latest

RUN apt-get update && apt-get install -y \
    cmake \
    gdb \
    build-essential \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /app


# Copy project source
COPY . /app/


CMD ["./build/IDV"]