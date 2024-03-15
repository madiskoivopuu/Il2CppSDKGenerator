#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LastDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LastDeathComponent"));
	}

	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LastDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x1429764))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LastDeathComponent*, uintptr_t))(Il2CppBase() + 0x1429800))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LastDeathComponent*, uintptr_t))(Il2CppBase() + 0x142989C))(this, writer);
	}

};

