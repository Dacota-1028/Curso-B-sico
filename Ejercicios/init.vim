" === === Configuraciones Básicas === ===
syntax	on 

set mouse=a " Interactuar con el mouse
set noerrorbells	" Para no dar error del sonido
"set sw=2	" Tabulaciones mas pequeñas.
set expandtab	" 
set smartindent " Sangria
set number	" Activar el numero
set rnu 	" Activar para ir
set numberwidth=1
set nowrap
set noswapfile
set nobackup
set incsearch 
set ignorecase
set clipboard=unnamedplus
set encoding=utf-8
set cursorline
set termguicolors

set colorcolumn=70
highlight ColoColumn ctermbg=0 guibg=lightgrey

":::instalacion de plugins:::

call plug#begin('~/AppData/Local/nvim/plugged') 	"directorio donde se van a instalar los plugins

"plugins
"
"=== === === TEMAS === === ===
"Plug 'morhetz/gruvbox'
"Plug 'ayu-theme/ayu-vim'
"Plug 'joshdick/onedark.vim'
"Plug 'abra/vim-obsidian'
"Plug 'projekt0n/github-nvim-theme'
"Plug 'navarasu/onedark.nvim'
Plug 'crusoexia/vim-monokai'

" === === VISUAL === ===
Plug 'Yggdroot/indentLine' 		"indentacion
Plug 'mattn/emmet-vim' 			"emmet para diseño web
Plug 'vim-airline/vim-airline'		"diseño de la barra en la cual se muestran los modos, la linea, etc.
Plug 'vim-airline/vim-airline-themes'	"temas para el vim-airline
Plug 'preservim/nerdtree'		"gestor de archivos en forma de arbol.
Plug 'christoomey/vim-tmux-navigator'	"poder navegar entre archivos abiertos
Plug 'jiangmiao/auto-pairs'		"autocompletado de llaves, corchetes, etc.
Plug 'ryanoasis/vim-devicons'
Plug 'tiagofumo/vim-nerdtree-syntax-highlight'
Plug 'shime/vim-livedown'               "Mardow
               
call plug#end() 			"cerramos el llamado de los plugins

"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
let mapleader = " " " Teclado Lider
"vmap <F5> :cource ~/.config/nvim/init.vim <CR>

" === Teclados de flecha => <==
noremap <up>    <nop>
noremap <down>  <nop>
noremap <left>  <nop>
noremap <right> <nop>

" === Guardar ===
nnoremap <c-s> :w<CR>

" === Barra de ventanas
nnoremap <silent> <right> :vertical resize +5   <CR>
nnoremap <silent> <left>  :vertical resize -5   <CR>
nnoremap <silent> <up>    :resize +5            <CR>
nnoremap <silent> <down>  :resize -5            <CR>

" === Abrir init.vim
nnoremap <leader>e :e $MYVIMRC  <CR>

" === Abrir Terminal
vnoremap <c-t> :split<CR>:ter<CR>
nnoremap <c-t> :split<CR>:ter<CR>
nnoremap <silent> <C-z> :ToggleTerminal<Enter>
tnoremap <silent> <C-z> <C-\><C-n>:ToggleTerminal<Enter>

" Moverse al buffer siguiente con <líder> + k
nnoremap <leader>k :bnext <CR>

" Moverse al buffer anterior con <líder> + j
nnoremap <leader>j :bprevious <CR>
" Cerrar el buffer actual con <líder> + q
nnoremap <leader>q :bdelete<CR>

"Crear una nueva ventana
nnoremap <leader>t :tabe<CR>

" Hacer un split vertical
noremap <leader>vs :vsp<CR>

" Hacer un split horizontal
nnoremap <leader>sp :sp<CR>

" Mardow
nmap gm :LivedownToggle<CR>

" Salir de modo insertar
imap jk <Esc>
imap <C-c> <Esc>l
"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
" Activar el theme 
"let g:python_highlight_all = 1
"set termguicolors
"set background=dark
"let g:gruvbox_contrast_dark="hard"
"let ayucolor="mirage"
" Vim


let g:python_highlight_all = 1
set termguicolors
set background=dark
let g:despacio_Twilight = 1
colorscheme monokai




"configuracion de emmet-vim
let g:user_emmet_leader_key=',' 	"mapeando la tecla lider por una coma, con esto se completa los tag con doble coma.


"configuracion de vim-airline
let g:airline#extensions#tabline#enabled = 1	"muestra la linea de pestaña en la que estamos buffer
let g:airline#extensions#tabline#formatter = 'unique_tail'	"muestra solo el nombre del archivo que estamos modificando
let g:airline_theme='onedark'	"el tema de airline


"configuracion de nerdtree
"mapeando el abrir y cerrar de nerdtree con nerdtreetoggle vemos los archivos en el arbol y podemos cerrarlo a la vez, map es la C mayuscula representa el
"control y -n la tecla n lo que indica que realizará la siguiente funcion de excribir el comando NERDTreeToggle y CR significa ENTER.
let g:NERDTreeeChDirMode = 2 "Cambiar el directorio actial al nodo padre actual
map <leader><tab> :NERDTreeToggle<CR>

let g:NERDTreeDirArrowExpandable = '➤'
let g:NERDTreeDirArrowCollapsible = '▼'

if exists("g:loaded_webdevicons")
        call webdevicons#refresh()
endif

" === === === === === === === === === === === === === === === === ===

