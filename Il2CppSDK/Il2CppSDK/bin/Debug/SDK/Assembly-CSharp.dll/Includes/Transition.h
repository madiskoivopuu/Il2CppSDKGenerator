#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Transition"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IState*> R& StateFrom() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IState*> R& StateTo() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = int32_t> R get_Id() {
		return ((R (*)(Transition*))(Il2CppBase() + 0x1522E90))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(Transition*, int32_t))(Il2CppBase() + 0x1522E98))(this, value);
	}
	template <typename R = IState*> R get_StateFrom() {
		return ((R (*)(Transition*))(Il2CppBase() + 0x1522EA0))(this);
	}
	template <typename R = void> R set_StateFrom(IState* value) {
		return ((R (*)(Transition*, IState*))(Il2CppBase() + 0x1522EA8))(this, value);
	}
	template <typename R = IState*> R get_StateTo() {
		return ((R (*)(Transition*))(Il2CppBase() + 0x1522EB0))(this);
	}
	template <typename R = void> R set_StateTo(IState* value) {
		return ((R (*)(Transition*, IState*))(Il2CppBase() + 0x1522EB8))(this, value);
	}
	template <typename R = uintptr_t> R Execute(IState* stateTo, ICommonLogger* logger) {
		return ((R (*)(Transition*, IState*, ICommonLogger*))(Il2CppBase() + 0x1522EC0))(this, stateTo, logger);
	}

};

