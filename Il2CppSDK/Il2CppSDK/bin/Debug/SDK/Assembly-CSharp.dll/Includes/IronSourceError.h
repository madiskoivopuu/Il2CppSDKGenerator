#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceError
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceError"));
	}

	template <typename T = Il2CppString*> T& description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& code() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T getErrorCode() {
		return ((T (*)(IronSourceError*))(Il2CppBase() + 0x1250C68))(this);
	}
	template <typename T = Il2CppString*> T getDescription() {
		return ((T (*)(IronSourceError*))(Il2CppBase() + 0x1250C70))(this);
	}
	template <typename T = int32_t> T getCode() {
		return ((T (*)(IronSourceError*))(Il2CppBase() + 0x1250C78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IronSourceError*))(Il2CppBase() + 0x1250C80))(this);
	}

};

}
