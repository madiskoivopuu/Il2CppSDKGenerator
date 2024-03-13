#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Info
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Info"));
	}

	template <typename T = Func3GameEntity*, ICommonContexts*, Nullable1float>*>*> T& ValueFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Func3GameEntity*, ICommonContexts*, bool>*> T& HasBuffFunc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Func3GameEntity*, ICommonContexts*, bool>*> T& HasDebuffFunc() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

