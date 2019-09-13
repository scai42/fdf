/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:14:54 by scai              #+#    #+#             */
/*   Updated: 2019/08/16 19:53:37 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H


# include "libft.h"
# include "para.h"
# include "key.h"

# include <limits.h>
# include <stddef.h>
# include <stdio.h>

# define N_DIM 4
# define CRIMSON_RED	0x990033
# define BROWN		0x996633
# define CLEAR 		0x77000000

# define PI 3.14159
# define RADIAN PI / 180

//void			ft_putnbr_base(int n, int b);
long			ft_htoi(char *s);
void			ft_puthex(int n);
int				ft_isdigit(int c);

/*
** Math/matrix
*/

float		**ft_identity_matrix(int fill, int fill_diagonal);
float			**ft_matrix_rotation(float x, char axis);
float			**ft_matrix_global_rotation(float **m, t_vect angle);
float			**ft_matrix_scaling(float **m, t_vect scaling);
float			**ft_matrix_z_scaling(float **matrix, float coefficient);
float			**ft_sum_matrix(float **a, float **b);
float			**ft_factor_matrix_free(float **a, float **b, char free);
t_vect		ft_matrix_to_vector(float **m, t_vect v, t_vect center);
void			ft_free_matrix(float **m);
float			**ft_copy_matrix(float **m);


typedef struct s_map	t_map;
typedef struct s_fdf	t_fdf;

/*
struct		s_map
{
	int			axis[3];
	int			proj[2];
	int			color;
	int			clr_man;
};
*/

enum		e_problem
{
	heap;	
	segfault;
	bus;
	pallette;
	arg;
	system;
	map;
}

enum		e_bool
{
	false
	true
}

enum		e_axes
{
	gravitational
	transversal
	longitudinal
}

struct		s_fdf
{
	const int	fd;
	char		*title;
	char		**info_tab;
	int			rows;
	int			cols;
	int			flg;
	void		*menu;
};

typedef struct	s_screen
{
	void		*mlx;
	void		*win;
	int			x;
	int			y;
	void		*hook;
}

typedef struct		s_data
{
	t_fdf	*data;
	int		pt_scale;
	int		ht_scale;
	int		clr_prop[2];
	double	ht_ratio;
	double	**axes[E_AXES];
	int		size;
	int		len;
	int		ht;
	double	map_pos[2];
}			t_data;

/*
typedef struct	s_img
{
  XImage	*image;
  Pixmap	pix;
  GC		gc;
  int		size_line;
  int		bpp;
  int		width;
  int		height;
  int		type;
  int		format;
  char		*data;
  XShmSegmentInfo shm;
} t_img;

typedef struct	s_xvar
{
  Display	*display;
  Window	root;
  int		screen;
  int		depth;
  Visual	*visual;
  Colormap	cmap;
  int		private_cmap;
  t_win_list	*win_list;
  int		(*loop_hook)();
  void		*loop_param;
  int		use_xshm;
  int		pshm_format;
  int		do_flush;
  int		decrgb[6];
} t_xvar;


int	mlx_int_do_nothing();
int	mlx_int_get_good_color();
int	mlx_int_find_in_pcm();
int	mlx_int_anti_resize_win();
int	mlx_int_wait_first_expose();
int	mlx_int_rgb_conversion();
int	mlx_int_deal_shm();
void	*mlx_int_new_xshm_image();
char    **mlx_int_str_to_wordtab();
void	*mlx_new_image();
int	shm_att_pb();

 */
/*
** =====TESTING======
*/

# define TESTF "maps/10-2.fdf"



#endif
