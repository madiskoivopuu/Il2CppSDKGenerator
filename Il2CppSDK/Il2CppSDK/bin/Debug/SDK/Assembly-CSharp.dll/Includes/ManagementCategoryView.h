#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "QuestCategoryView.h" 

class ManagementCategoryView : public QuestCategoryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManagementCategoryView"));
	}

	template <typename T = uintptr_t> T& count() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Bind(Il2CppString* categoryName, uintptr_t onSelect, Func1ValueTuple2bool, Il2CppString*>*>* notifyFunc) {
		return ((T (*)(ManagementCategoryView*, Il2CppString*, uintptr_t, Func1ValueTuple2bool, Il2CppString*>*>*))(Il2CppBase() + 0x125FEFC))(this, categoryName, onSelect, notifyFunc);
	}
	template <typename T = void> T OnUpdateDraw() {
		return ((T (*)(ManagementCategoryView*))(Il2CppBase() + 0x125FFEC))(this);
	}
	template <typename T = void> T Bindb__2_0(bool isOn) {
		return ((T (*)(ManagementCategoryView*, bool))(Il2CppBase() + 0x1260370))(this, isOn);
	}

};

