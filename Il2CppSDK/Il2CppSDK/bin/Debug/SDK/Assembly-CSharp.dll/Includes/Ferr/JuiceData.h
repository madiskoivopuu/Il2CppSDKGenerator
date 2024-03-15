#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class JuiceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "JuiceData"));
	}

	template <typename R = Ferr::JuiceType*> R& type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& transform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& start() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& end() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& startTime() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& relative() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& curve() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& callback() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = bool> R Update() {
		return ((R (*)(JuiceData*))(Il2CppBase() + 0x14E7A74))(this);
	}
	template <typename R = void> R Cancel() {
		return ((R (*)(JuiceData*))(Il2CppBase() + 0x14E89A8))(this);
	}

};

}
