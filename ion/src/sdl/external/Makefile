SFLAGS += -Iion/src/sdl/external/sdl/include

sdl_src += $(addprefix ion/src/sdl/external/sdl/src/, \
  SDL.c \
  SDL_assert.c \
  SDL_dataqueue.c \
  SDL_error.c \
  SDL_hints.c \
  SDL_log.c \
  atomic/SDL_atomic.c \
  atomic/SDL_spinlock.c \
  audio/SDL_audio.c \
  audio/SDL_audiocvt.c \
  audio/SDL_audiodev.c \
  audio/SDL_audiotypecvt.c \
  audio/SDL_mixer.c \
  audio/SDL_wave.c \
  audio/dummy/SDL_dummyaudio.c \
  cpuinfo/SDL_cpuinfo.c \
  dynapi/SDL_dynapi.c \
  events/SDL_clipboardevents.c \
  events/SDL_displayevents.c \
  events/SDL_dropevents.c \
  events/SDL_events.c \
  events/SDL_gesture.c \
  events/SDL_keyboard.c \
  events/SDL_mouse.c \
  events/SDL_quit.c \
  events/SDL_touch.c \
  events/SDL_windowevents.c \
  file/SDL_rwops.c \
  haptic/SDL_haptic.c \
  haptic/dummy/SDL_syshaptic.c \
  joystick/SDL_gamecontroller.c \
  joystick/SDL_joystick.c \
  joystick/hidapi/SDL_hidapi_ps4.c \
  joystick/hidapi/SDL_hidapi_switch.c \
  joystick/hidapi/SDL_hidapi_xbox360.c \
  joystick/hidapi/SDL_hidapi_xboxone.c \
  joystick/hidapi/SDL_hidapijoystick.c \
  power/SDL_power.c \
  render/SDL_render.c \
  render/SDL_yuv_sw.c \
  render/opengl/SDL_render_gl.c \
  render/opengl/SDL_shaders_gl.c \
  render/opengles/SDL_render_gles.c \
  render/opengles2/SDL_render_gles2.c \
  render/opengles2/SDL_shaders_gles2.c \
  render/software/SDL_blendfillrect.c \
  render/software/SDL_blendline.c \
  render/software/SDL_blendpoint.c \
  render/software/SDL_drawline.c \
  render/software/SDL_drawpoint.c \
  render/software/SDL_render_sw.c \
  render/software/SDL_rotate.c \
  sensor/SDL_sensor.c \
  sensor/dummy/SDL_dummysensor.c \
  stdlib/SDL_getenv.c \
  stdlib/SDL_iconv.c \
  stdlib/SDL_malloc.c \
  stdlib/SDL_qsort.c \
  stdlib/SDL_stdlib.c \
  stdlib/SDL_string.c \
  thread/SDL_thread.c \
  timer/SDL_timer.c \
  video/SDL_RLEaccel.c \
  video/SDL_blit.c \
  video/SDL_blit_0.c \
  video/SDL_blit_1.c \
  video/SDL_blit_A.c \
  video/SDL_blit_N.c \
  video/SDL_blit_auto.c \
  video/SDL_blit_copy.c \
  video/SDL_blit_slow.c \
  video/SDL_bmp.c \
  video/SDL_clipboard.c \
  video/SDL_egl.c \
  video/SDL_fillrect.c \
  video/SDL_pixels.c \
  video/SDL_rect.c \
  video/SDL_shape.c \
  video/SDL_stretch.c \
  video/SDL_surface.c \
  video/SDL_video.c \
  video/SDL_vulkan_utils.c \
  video/SDL_yuv.c \
  video/dummy/SDL_nullevents.c \
  video/dummy/SDL_nullframebuffer.c \
  video/dummy/SDL_nullvideo.c \
  video/yuv2rgb/yuv_rgb.c \
)

ifeq ($(DEBUG),1)
SDL_SFLAGS += -DSDL_ASSERT_LEVEL=2
else
SDL_SFLAGS += -DSDL_ASSERT_LEVEL=0
endif

include ion/src/sdl/external/config.$(MODEL).mak

$(call object_for,$(sdl_src)): SFLAGS += $(SDL_SFLAGS)

ion_src += $(sdl_src)
