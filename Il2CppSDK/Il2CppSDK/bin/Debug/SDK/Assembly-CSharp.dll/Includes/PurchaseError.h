#pragma once

class PurchaseError
{

	PurchasingUnavailable = 0,
	ExistingPurchasePending = 1,
	ProductUnavailable = 2,
	SignatureInvalid = 3,
	UserCancelled = 4,
	PaymentDeclined = 5,
	DuplicateTransaction = 6,
	Unknown = 7,
	NotEnoughGameCurrency = 8,
	NotEnoughRealCurrency = 9,
	AlreadyProcessed = 10,
	ValidationError = 11,
	ServerError = 12,
	InProcessWait = 13,
	None = 14

};

