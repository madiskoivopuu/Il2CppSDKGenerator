#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PutAllData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PutAllData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PutAllData*, uintptr_t))(Il2CppBase() + 0x11BB980))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PutAllData*, uintptr_t))(Il2CppBase() + 0x11BB9C4))(this, reader);
	}

};

