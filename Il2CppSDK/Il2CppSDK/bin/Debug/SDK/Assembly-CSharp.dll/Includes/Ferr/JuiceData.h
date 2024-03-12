#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class JuiceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "JuiceData"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& start() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& end() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& relative() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T Update() {
		return ((T (*)(JuiceData*))(Il2CppBase() + 0x14E7A74))(this);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(JuiceData*))(Il2CppBase() + 0x14E89A8))(this);
	}

};

}
