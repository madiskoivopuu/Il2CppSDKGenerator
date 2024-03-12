#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColorShit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorShit"));
	}

	template <typename T = uintptr_t> static T& _blendShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _defaultShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& _transparentValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _maskShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _zDepthShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& _layerMaskMinimap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& _staticInited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _matModifiers() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rendersToHide() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsInvisible() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsAvatarOrFriend() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& NeedRecache() {
		return *(T*)((uintptr_t)this + 0x45);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ColorShit*))(Il2CppBase() + 0xE23EF0))(this);
	}
	template <typename T = void> T Recache() {
		return ((T (*)(ColorShit*))(Il2CppBase() + 0xE24058))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ColorShit*))(Il2CppBase() + 0xE24444))(this);
	}

};

}
