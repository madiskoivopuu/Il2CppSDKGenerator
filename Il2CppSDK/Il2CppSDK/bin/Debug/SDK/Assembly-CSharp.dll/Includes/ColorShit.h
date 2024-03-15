#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColorShit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorShit"));
	}

	template <typename R = uintptr_t> static R& _blendShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& _defaultShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = float> R& _transparentValue() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> static R& _maskShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& _zDepthShader() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = int32_t> static R& _layerMaskMinimap() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = bool> static R& _staticInited() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	 Il2CppList<DynamicMaterialModifier*>*& _matModifiers() {
		return *(Il2CppList<DynamicMaterialModifier*>**)((uintptr_t)this + 0x20);
	}
	 Il2CppList<uintptr_t>*& _rendersToHide() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& IsInvisible() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Color() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = bool> R& IsAvatarOrFriend() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = bool> R& NeedRecache() {
		return *(R*)((uintptr_t)this + 0x45);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ColorShit*))(Il2CppBase() + 0xE23EF0))(this);
	}
	template <typename R = void> R Recache() {
		return ((R (*)(ColorShit*))(Il2CppBase() + 0xE24058))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(ColorShit*))(Il2CppBase() + 0xE24444))(this);
	}

};

