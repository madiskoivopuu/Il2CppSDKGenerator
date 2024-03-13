#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace comredbeatRBFUtilsRender {

class HUDFPS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "comredbeatRBFUtilsRender", "HUDFPS"));
	}

	template <typename T = float> T& updateInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& currentFPS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _spriteText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& accum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& frames() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& timeleft() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HUDFPS*))(Il2CppBase() + 0x145303C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HUDFPS*))(Il2CppBase() + 0x1453040))(this);
	}

};

}
