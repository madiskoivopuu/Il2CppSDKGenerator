#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InputAxesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputAxesSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> static R& HISTORY_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& _koef() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IGroup1<InputEntity*>*& _inputs() {
		return *(IGroup1<InputEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(InputAxesSystem*))(Il2CppBase() + 0x1E40130))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(InputAxesSystem*))(Il2CppBase() + 0x1E401AC))(this);
	}

};

