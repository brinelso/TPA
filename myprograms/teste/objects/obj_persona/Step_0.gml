#region CONTROLES
var _key_right = keyboard_check(ord("D"))//DIREITA
var _key_left = keyboard_check(ord("A"))//ESQUERDA
var _key_jump = keyboard_check(ord("W"))//PULO
var _key_shoot = keyboard_check_pressed(ord("K"))//TIRO
#endregion

#region MOVIMENTOS
var _move = _key_right - _key_left

hspd = _move * spd;

vspd = vspd + grv;

if (hspd != 0) image_xscale = sign(hspd);

//COLISAO HORIZONTAL
if place_meeting(x+hspd,y,obj_block)
{
	while(!place_meeting(x+sign(hspd),y,obj_block))
	{
	x = x + sign(hspd);
	}
hspd = 0;
}
x = x + hspd;

//COLISAO VERTICAL
if place_meeting(x,y+vspd,obj_block)
{
	while(!place_meeting(x,y+sign(vspd),obj_block))
	{
		y = y + sign(vspd);
	}
vspd = 0;
}
y = y + vspd;

if place_meeting(x,y+1,obj_block) and _key_jump
{
vspd -=12;
}
#endregion

#region TIRO

var _flipped = direction;
var _gun_x = (x+4)*(_flipped)
var _xx = x + lengthdir_x(0,image_angle)
var _y_offset =	lengthdir_y(-90,image_angle)

if _key_shoot && global.bullets>0
{	
with (instance_create_layer(_xx,y+10,"shoot",obj_shoot))
{
	global.bullets--;
	//speed do tiro
	speed = 10;
	//DIREÇÃO
	direction = -90 +90 * other.image_xscale;
	//ANGULO
	image_angle = direction;
}
}
#endregion