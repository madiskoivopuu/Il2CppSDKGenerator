#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Info
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Info"));
	}

	 Func3<GameEntity*, ICommonContexts*, Nullable1<float>*>*& ValueFunc() {
		return *(Func3<GameEntity*, ICommonContexts*, Nullable1<float>*>**)((uintptr_t)this + 0x10);
	}
	 Func3<GameEntity*, ICommonContexts*, bool>*& HasBuffFunc() {
		return *(Func3<GameEntity*, ICommonContexts*, bool>**)((uintptr_t)this + 0x18);
	}
	 Func3<GameEntity*, ICommonContexts*, bool>*& HasDebuffFunc() {
		return *(Func3<GameEntity*, ICommonContexts*, bool>**)((uintptr_t)this + 0x20);
	}


};

