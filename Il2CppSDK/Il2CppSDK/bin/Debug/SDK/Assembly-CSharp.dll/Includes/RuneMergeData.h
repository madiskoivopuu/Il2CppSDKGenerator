#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneMergeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneMergeData"));
	}

	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ToId() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(RuneMergeData*, uintptr_t))(Il2CppBase() + 0x1353C2C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(RuneMergeData*, uintptr_t))(Il2CppBase() + 0x1353C80))(this, reader);
	}

};
