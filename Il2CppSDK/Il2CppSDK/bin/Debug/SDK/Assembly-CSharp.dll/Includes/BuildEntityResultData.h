#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildEntityResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityResultData"));
	}

	template <typename R = int32_t> R& ResultId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BuildEntityResultData*, uintptr_t))(Il2CppBase() + 0x15A43A0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BuildEntityResultData*, uintptr_t))(Il2CppBase() + 0x15A43F4))(this, reader);
	}

};
