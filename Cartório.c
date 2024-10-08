<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Feliz Aniversário</title>
    <link href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
    <style>
        .carousel-item img {
            max-height: 400px;
            width: 100%;
            object-fit: cover;
        }
        .text-area {
            background-color: #f8f9fa;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
        }
        header {
            background-color: #ff0000; /* Cor vermelha */
        }
        h1 {
            color: #000; /* Texto preto */
        }
        video {
            max-width: 50%; /* Garante que o vídeo seja responsivo */
            height: auto; /* Mantém a proporção do vídeo */
        }
    </style>
</head>
<body>
    <header class="text-center py-4">
        <h1>Feliz Aniversário Senhorita Daiana</h1>
        <h6>é o grelo</h6>
        <nav class="navbar navbar-expand-lg navbar-light">
            <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
            </div>
        </nav>
    </header>

    <div class="container mt-5">
        <div class="row">
            <div class="col-md-6">
                <div id="carouselExample" class="carousel slide" data-ride="carousel">
                    <div class="carousel-inner">
                        <div class="carousel-item active">
                            <img src="./Imagens/Imagem1.jpg" alt="Imagem 1">
                        </div>
                        <div class="carousel-item">
                            <img src="./Imagens/Imagem2.jpg" alt="Imagem 2">
                        </div>
                        <div class="carousel-item">
                            <img src="./Imagens/Imagem3.jpg" alt="Imagem 3">
                        </div>
                        <div class="carousel-item">
                            <img src="./Imagens/Imagem4.jpg" alt="Imagem 4">
                        </div>
                        <div class="carousel-item">
                            <img src="./Imagens/Imagem5.jpg" alt="Imagem 5">
                        </div>
                    </div>
                    <a class="carousel-control-prev" href="#carouselExample" role="button" data-slide="prev">
                        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
                        <span class="sr-only">Anterior</span>
                    </a>
                    <a class="carousel-control-next" href="#carouselExample" role="button" data-slide="next">
                        <span class="carousel-control-next-icon" aria-hidden="true"></span>
                        <span class="sr-only">Próximo</span>
                    </a>
                </div>
            </div>
            <div class="col-md-6 text-area">
                <h2>Vídeo Especial</h2>
                <video controls>
                    <source src="Imagens/Thebest.mp4" type="video/mp4">
                    Seu navegador não suporta a tag de vídeo.
                </video>
            </div>
        </div>
    </div>

    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</body>
</html>
