#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 

class SeasonDataContext : public DataContext1<SeasonEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonDataContext"));
	}

	template <typename T = Il2CppString*> static T& WithOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SeasonsOrdered() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonsOrdered() {
		return ((T (*)(SeasonDataContext*))(Il2CppBase() + 0x135D694))(this);
	}
	template <typename T = void> T set_SeasonsOrdered(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SeasonDataContext*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x135D69C))(this, value);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(SeasonDataContext*))(Il2CppBase() + 0x135D870))(this);
	}
	template <typename T = SeasonEntity*> T GetEntityWithOrder(int32_t order) {
		return ((T (*)(SeasonDataContext*, int32_t))(Il2CppBase() + 0x135DBF0))(this, order);
	}
	template <typename T = void> T Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((T (*)(SeasonDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x135DCCC))(this, blueprints);
	}

};

