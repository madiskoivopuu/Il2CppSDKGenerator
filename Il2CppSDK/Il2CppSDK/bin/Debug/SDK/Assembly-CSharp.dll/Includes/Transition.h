#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Transition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Transition"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IState*> T& StateFrom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IState*> T& StateTo() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(Transition*))(Il2CppBase() + 0x1522E90))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(Transition*, int32_t))(Il2CppBase() + 0x1522E98))(this, value);
	}
	template <typename T = IState*> T get_StateFrom() {
		return ((T (*)(Transition*))(Il2CppBase() + 0x1522EA0))(this);
	}
	template <typename T = void> T set_StateFrom(IState* value) {
		return ((T (*)(Transition*, IState*))(Il2CppBase() + 0x1522EA8))(this, value);
	}
	template <typename T = IState*> T get_StateTo() {
		return ((T (*)(Transition*))(Il2CppBase() + 0x1522EB0))(this);
	}
	template <typename T = void> T set_StateTo(IState* value) {
		return ((T (*)(Transition*, IState*))(Il2CppBase() + 0x1522EB8))(this, value);
	}
	template <typename T = uintptr_t> T Execute(IState* stateTo, ICommonLogger* logger) {
		return ((T (*)(Transition*, IState*, ICommonLogger*))(Il2CppBase() + 0x1522EC0))(this, stateTo, logger);
	}

};

