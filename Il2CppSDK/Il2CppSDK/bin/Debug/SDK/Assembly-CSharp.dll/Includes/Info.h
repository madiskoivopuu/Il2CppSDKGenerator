#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Info
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Info"));
	}

	 Func3GameEntity*, ICommonContexts*, Nullable1float>*>*& ValueFunc() {
		return *(Func3GameEntity*, ICommonContexts*, Nullable1float>*>**)((uintptr_t)this + 0x10);
	}
	 Func3GameEntity*, ICommonContexts*, bool>*& HasBuffFunc() {
		return *(Func3GameEntity*, ICommonContexts*, bool>**)((uintptr_t)this + 0x18);
	}
	 Func3GameEntity*, ICommonContexts*, bool>*& HasDebuffFunc() {
		return *(Func3GameEntity*, ICommonContexts*, bool>**)((uintptr_t)this + 0x20);
	}


};

