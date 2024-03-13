#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcquireDicedItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDicedItemData"));
	}

	template <typename T = Il2CppString*> T& EntityName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& MailMessageId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AcquireDicedItemData*, uintptr_t))(Il2CppBase() + 0x18E74DC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AcquireDicedItemData*, uintptr_t))(Il2CppBase() + 0x18E7530))(this, reader);
	}

};

