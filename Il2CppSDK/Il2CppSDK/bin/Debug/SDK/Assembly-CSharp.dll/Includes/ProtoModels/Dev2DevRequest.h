#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Dev2DevRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Dev2DevRequest"));
	}

	template <typename T = MessageParser1Dev2DevRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserDev2DevIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& userDev2DevID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& EventNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& eventName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ActionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& action_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& LabelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& label_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SubLabelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& subLabel_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& PlayerLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& playerLevel_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& PlatformFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& platform_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& Value2FieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& value2_() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = MessageParser1Dev2DevRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xEBFA30))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xEBFA94))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFBB4))(this);
	}
	template <typename T = Dev2DevRequest*> T Clone() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFD4C))(this);
	}
	template <typename T = Il2CppString*> T get_UserDev2DevID() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFDA8))(this);
	}
	template <typename T = void> T set_UserDev2DevID(Il2CppString* value) {
		return ((T (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFDB0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFE30))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEBFE38))(this, value);
	}
	template <typename T = Il2CppString*> T get_EventName() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFE40))(this);
	}
	template <typename T = void> T set_EventName(Il2CppString* value) {
		return ((T (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFE48))(this, value);
	}
	template <typename T = Il2CppString*> T get_Action() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFEC8))(this);
	}
	template <typename T = void> T set_Action(Il2CppString* value) {
		return ((T (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFED0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Label() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFF50))(this);
	}
	template <typename T = void> T set_Label(Il2CppString* value) {
		return ((T (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFF58))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubLabel() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEBFFD8))(this);
	}
	template <typename T = void> T set_SubLabel(Il2CppString* value) {
		return ((T (*)(Dev2DevRequest*, Il2CppString*))(Il2CppBase() + 0xEBFFE0))(this, value);
	}
	template <typename T = int32_t> T get_PlayerLevel() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0060))(this);
	}
	template <typename T = void> T set_PlayerLevel(int32_t value) {
		return ((T (*)(Dev2DevRequest*, int32_t))(Il2CppBase() + 0xEC0068))(this, value);
	}
	template <typename T = int64_t> T get_Value() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0070))(this);
	}
	template <typename T = void> T set_Value(int64_t value) {
		return ((T (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEC0078))(this, value);
	}
	template <typename T = int32_t> T get_Platform() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0080))(this);
	}
	template <typename T = void> T set_Platform(int32_t value) {
		return ((T (*)(Dev2DevRequest*, int32_t))(Il2CppBase() + 0xEC0088))(this, value);
	}
	template <typename T = int64_t> T get_Value2() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0090))(this);
	}
	template <typename T = void> T set_Value2(int64_t value) {
		return ((T (*)(Dev2DevRequest*, int64_t))(Il2CppBase() + 0xEC0098))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Dev2DevRequest*, Il2CppObject*))(Il2CppBase() + 0xEC00A0))(this, other);
	}
	template <typename T = bool> T Equals_1(Dev2DevRequest* other) {
		return ((T (*)(Dev2DevRequest*, Dev2DevRequest*))(Il2CppBase() + 0xEC0110))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0200))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC0368))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Dev2DevRequest*, uintptr_t))(Il2CppBase() + 0xEC03CC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Dev2DevRequest*))(Il2CppBase() + 0xEC05D8))(this);
	}
	template <typename T = void> T MergeFrom(Dev2DevRequest* other) {
		return ((T (*)(Dev2DevRequest*, Dev2DevRequest*))(Il2CppBase() + 0xEC08A8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Dev2DevRequest*, uintptr_t))(Il2CppBase() + 0xEC0984))(this, input);
	}

};

}
