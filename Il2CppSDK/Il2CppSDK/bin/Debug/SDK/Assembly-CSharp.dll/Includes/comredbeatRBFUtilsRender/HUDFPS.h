#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace comredbeatRBFUtilsRender {

class HUDFPS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "comredbeatRBFUtilsRender", "HUDFPS"));
	}

	template <typename R = float> R& updateInterval() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& currentFPS() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& color() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _spriteText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& accum() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& frames() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& timeleft() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Start() {
		return ((R (*)(HUDFPS*))(Il2CppBase() + 0x145303C))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(HUDFPS*))(Il2CppBase() + 0x1453040))(this);
	}

};

}
