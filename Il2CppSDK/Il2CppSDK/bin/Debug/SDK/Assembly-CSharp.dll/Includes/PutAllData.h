#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PutAllData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PutAllData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PutAllData*, uintptr_t))(Il2CppBase() + 0x11BB980))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PutAllData*, uintptr_t))(Il2CppBase() + 0x11BB9C4))(this, reader);
	}

};

