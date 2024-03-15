#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TakeStoreInboxData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeStoreInboxData"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(TakeStoreInboxData*, uintptr_t))(Il2CppBase() + 0x16A4B08))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(TakeStoreInboxData*, uintptr_t))(Il2CppBase() + 0x16A4B4C))(this, reader);
	}

};

