#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AcquireDicedItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDicedItemData"));
	}

	template <typename R = Il2CppString*> R& EntityName() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int64_t> R& MailMessageId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AcquireDicedItemData*, uintptr_t))(Il2CppBase() + 0x18E74DC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AcquireDicedItemData*, uintptr_t))(Il2CppBase() + 0x18E7530))(this, reader);
	}

};

