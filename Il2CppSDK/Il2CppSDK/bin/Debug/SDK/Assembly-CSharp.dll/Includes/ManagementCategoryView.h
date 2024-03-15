#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestCategoryView.h" 

class ManagementCategoryView : public QuestCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManagementCategoryView"));
	}

	template <typename R = uintptr_t> R& count() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& icon() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R Bind(Il2CppString* categoryName, uintptr_t onSelect, Func1<ValueTuple2<bool, Il2CppString*>*>* notifyFunc) {
		return ((R (*)(ManagementCategoryView*, Il2CppString*, uintptr_t, Func1<ValueTuple2<bool, Il2CppString*>*>*))(Il2CppBase() + 0x125FEFC))(this, categoryName, onSelect, notifyFunc);
	}
	template <typename R = void> R OnUpdateDraw() {
		return ((R (*)(ManagementCategoryView*))(Il2CppBase() + 0x125FFEC))(this);
	}
	template <typename R = void> R Bindb__2_0(bool isOn) {
		return ((R (*)(ManagementCategoryView*, bool))(Il2CppBase() + 0x1260370))(this, isOn);
	}

};

