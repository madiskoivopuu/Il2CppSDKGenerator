#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TripleString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TripleString"));
	}

	template <typename R = Il2CppString*> R& Item1() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Item2() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Item3() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Equals(TripleString* other) {
		return ((R (*)(TripleString*, TripleString*))(Il2CppBase() + 0x15266EC))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(TripleString*, Il2CppObject*))(Il2CppBase() + 0x1526750))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(TripleString*))(Il2CppBase() + 0x15267EC))(this);
	}

};

