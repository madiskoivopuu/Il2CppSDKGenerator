#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class JuiceDataColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "JuiceDataColor"));
	}

	template <typename R = uintptr_t> R& renderer() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& start() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& end() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& startTime() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = uintptr_t> R& curve() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& callback() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = bool> R Update() {
		return ((R (*)(JuiceDataColor*))(Il2CppBase() + 0x14E7DD4))(this);
	}
	template <typename R = void> R Cancel() {
		return ((R (*)(JuiceDataColor*))(Il2CppBase() + 0x14E8BBC))(this);
	}

};

}
