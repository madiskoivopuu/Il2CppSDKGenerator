#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class JuiceDataColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "JuiceDataColor"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& start() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T Update() {
		return ((T (*)(JuiceDataColor*))(Il2CppBase() + 0x14E7DD4))(this);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(JuiceDataColor*))(Il2CppBase() + 0x14E8BBC))(this);
	}

};

}
