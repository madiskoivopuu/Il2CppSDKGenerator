#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DataContext1.h" 
#include "SeasonEntity.h" 

class SeasonDataContext : public DataContext1<SeasonEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonDataContext"));
	}

	template <typename R = Il2CppString*> static R& WithOrder() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<SeasonEntity*>*> R& SeasonsOrdered() {
		return *(R*)((uintptr_t)this + 0x110);
	}

	template <typename R = Il2CppArray<SeasonEntity*>*> R get_SeasonsOrdered() {
		return ((R (*)(SeasonDataContext*))(Il2CppBase() + 0x135D694))(this);
	}
	template <typename R = void> R set_SeasonsOrdered(Il2CppArray<SeasonEntity*>* value) {
		return ((R (*)(SeasonDataContext*, Il2CppArray<SeasonEntity*>*))(Il2CppBase() + 0x135D69C))(this, value);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(SeasonDataContext*))(Il2CppBase() + 0x135D870))(this);
	}
	template <typename R = SeasonEntity*> R GetEntityWithOrder(int32_t order) {
		return ((R (*)(SeasonDataContext*, int32_t))(Il2CppBase() + 0x135DBF0))(this, order);
	}
	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(SeasonDataContext*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x135DCCC))(this, blueprints);
	}

};

