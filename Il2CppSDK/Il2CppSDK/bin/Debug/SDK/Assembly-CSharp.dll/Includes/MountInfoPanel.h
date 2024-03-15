#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInfoPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInfoPanel"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _typeAndGrade() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TextMonoBehaviour*> R& _tenacity() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextMonoBehaviour*> R& _slotsCount() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TextMonoBehaviour*> R& _mountSpeed() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<MountSkillInfo*>*> R& _mountSkills() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R Show(UIWindow* window, IInventoryItem* mount) {
		return ((R (*)(MountInfoPanel*, UIWindow*, IInventoryItem*))(Il2CppBase() + 0x1545C2C))(this, window, mount);
	}

};

