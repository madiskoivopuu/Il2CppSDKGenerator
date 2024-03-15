#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NeedExpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NeedExpComponent"));
	}

	template <typename R = Il2CppArray<uint32_t>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(NeedExpComponent*, uintptr_t))(Il2CppBase() + 0x13A9248))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(NeedExpComponent*, uintptr_t))(Il2CppBase() + 0x13A93E0))(this, writer);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(NeedExpComponent*, Il2CppObject*))(Il2CppBase() + 0x13A9404))(this, targetObject);
	}

};

