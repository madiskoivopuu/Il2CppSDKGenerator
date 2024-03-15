#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "TempBuffEntity.h" 

class TempBuffDataContext : public DataContext1<TempBuffEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TempBuffDataContext"));
	}

	template <typename R = Il2CppString*> static R& _active() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _uniqueLookup() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& OBT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& QA() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 IGroup1<TempBuffEntity*>*& _serverLifeTimeGroup() {
		return *(IGroup1<TempBuffEntity*>**)((uintptr_t)this + 0x110);
	}

	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(TempBuffDataContext*))(Il2CppBase() + 0x16AF808))(this);
	}
	template <typename R = TempBuffEntity*> R GetEntityWithUniqueLookup(Il2CppString* uniqueLookup) {
		return ((R (*)(TempBuffDataContext*, Il2CppString*))(Il2CppBase() + 0x16AFD50))(this, uniqueLookup);
	}
	template <typename R = TempBuffEntity*> R GetActiveNow(ICommonContexts* world, Il2CppString* uniqueLookup) {
		return ((R (*)(TempBuffDataContext*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x16AFE2C))(this, world, uniqueLookup);
	}
	template <typename R = TempBuffEntity*> R GetEntityWithServerLifeTime() {
		return ((R (*)(TempBuffDataContext*))(Il2CppBase() + 0x16B003C))(this);
	}

};

