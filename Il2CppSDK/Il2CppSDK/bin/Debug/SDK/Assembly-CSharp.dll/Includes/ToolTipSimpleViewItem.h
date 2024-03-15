#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToolTipViewBase.h" 

class ToolTipSimpleViewItem : public ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolTipSimpleViewItem"));
	}

	template <typename R = bool> R& _isAutomative() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _titleKey() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _textKeys() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& _title() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _text() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R Bind(IToolTipSource* source, Il2CppString* caption, Il2CppArray<Il2CppString*>* description) {
		return ((R (*)(ToolTipSimpleViewItem*, IToolTipSource*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x14F1F04))(this, source, caption, description);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F21D4))(this);
	}
	template <typename R = void> R Init() {
		return ((R (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F1F5C))(this);
	}
	template <typename R = void> R ShowTooltip() {
		return ((R (*)(ToolTipSimpleViewItem*))(Il2CppBase() + 0x14F21E4))(this);
	}

};

